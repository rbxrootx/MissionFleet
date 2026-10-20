// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BCC60 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_100bcc60_100BCC60() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 40000000h
        mov dword ptr [ecx + 74h], eax
        ; Exact mapped bytes 75 1C: jne 0x100bcc8a
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ecx + 148h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ecx + 148h]
        ; Exact mapped bytes 66 81 61 24 FD FF: and word ptr [ecx + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 148h]
        mov dword ptr [edx + 50h], 1
        mov ecx, dword ptr [ecx + 148h]
        or byte ptr [ecx + 24h], 2
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
