// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877C620 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5877c620() {
    __asm {
        mov eax, dword ptr [ecx + 210h]
        mov dword ptr [ecx + 25ch], 2
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 214h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 20ch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes E9 F5 E6 FF FF: jmp 0x5877ad50
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
