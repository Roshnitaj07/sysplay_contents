 cml_einitstatus cml_audioplayer_init(int argc, char *argv[])
    Description: This API initializes the PCM device,sets the parameters and creates the play-list 

    Returns status
        The following Error codes are returned :
        INIT_SUCCESS - This is returned on successful execution of API
        INIT_FILE(S)_NOT_FOUND - returned if file(s) are not found
    
     status cml_audioplayer_play(char *filename[ ])
    Description: This API fetches the file handle of the first file in the internal play-list and starts the playback

    Returns status
     PLAY_SUCCESS:0
     ON failure it returns -EPIPE 

status cml_audioplayer_pause_resume(int val)
    Description: This API toggles the playback between pause and resume depending on the val being sent.

    Returns status
        The following Error codes are returned :
        PR_SUCCESS - This is returned on successful execution of API
        PR_ON_FAILURE :audio cannot paused.
                                   
status cml_audioplayer_volume_control(long val)
    Description: This API increases or decreases the volume depending on the key pressed by the user..

    Returns status
        The following Error codes are returned :
        V_SUCCESS - This is returned on successful execution of API
        V_UNDERFLOW - returned if volume decreased below 10%
        V_OVERFLOW – returned if volume increased above 100%


status cml_audioplayer_play_next_file(char *curfilename[] ) 
    Description: This API jumps the play-back to the next track in the play-list

    Returns status
        The following Error codes are returned :
        PN_SUCCESS - This is returned on successful execution of API
       PN_ENDOF_PLAYLIST - returned if the play-back is at the end of the play-list

status cml_audioplayer_play_prev_file(char *curfilename[] ) 
    Description: This API jumps the play-back to the previous track in the play-list

    Returns status
        The following Error codes are returned :
 PP_ WAV_SUCCESS - This is returned on successful execution of API               PP_BEGINOF_PLAYLIST - returned if the play-back is at the beginning of the play-list

status cml_audioplayer_seek_forward( ) 
    Description: This API seeks the play-back forward.

    Returns status
        The following Error codes are returned :
      SF_SUCCESS - This is returned on successful execution of A
     SF_ REACHED_EOF - returned if the play-back is at the end of audio

status cml_audioplayer_seek_back()
    Description: This API seeks the play-back backward.

    Returns status
        The following Error codes are returned :
        SB_SUCCESS - This is returned on successful execution of API
       SB_STARTOF_AUDIO - returned if the play-back is at the beginning of audio


status cml_audioplayer_seek_to(int sec )
    Description: This API seeks the play-back to the particular time-stamp given by sec.
    Returns status
        The following Error codes are returned :
        ST_SUCCESS - This is returned on successful execution of API
        ST_INVALID_TIME - returned if a invalid time-stamp is entered


status cml_audioplayer _playback_stop( )
    Description: This API stops the play-back,clears the buffer,closes the device and cancel the 	playback_thread

    Returns status
        The following Error codes are returned :
        S_SUCCESS - This is returned on successful execution of API
        
  status cml_audioplayer_checkInput (int argc,char*argv[])
     Description: this API checks the input entered by the user based on that it will return the following status

Return status
   The following status Code is returned
CI_SUCCESS-This is returned on valid inputs.
On Invalid cases it will return the following error codes

enum eci_status {
 “SUCCESS”=CI0,
”INVALID FILE_EXTENSION”,
”INVALID PLAY LIST_EXTENSION”,
INVALID KEY_FOR_SHUFFLE”,
”EMPTY_PATH”,”CORRUPTED_FILES”
}
      
status cml_audioplayer_shuffle(struct *f)
Description:This API randomly shuffle myplaylist

Return Status:
     SHUFFLE_SUCCESS:it will return 0
      CANNOT_SHUFFLE:it will return 1

status cml_audioplayer_create_playlist(int argc,char *argv[])
Description:This API will create internal playlist.

Return status:

CREATED_MYPLAYLIST
UNABLE_TO_CREATE_MYPLAYLIST

 
status cml_audioplayer_get_key()
Description:This API will get the input key from commandline.

Return status:
KEY_SUCCESS-on successfully getting the input key.
INVALID_KEY-API will unable to get the key.

status cml_audioplayer_header_info(struct *f)
Description:This API will get the header information 0f the .wav file.

Return status
 *HEADER-it will return pointer to .wave file header 
CANNOT_FETCH_FILE_INFO-if file is corrupted.

status cml_audioplayer_check_state();

















