// Reconstructed export that passes the host callback table into Main's
// renderer-global initialization routine.
extern int __cdecl CopyHostCallbacks(void* callbacks);

extern "C" int __cdecl InitCGCDLL(void* callbacks)
{
    (void)CopyHostCallbacks(callbacks);
    return 0;
}
