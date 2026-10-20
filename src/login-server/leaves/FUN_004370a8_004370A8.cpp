// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004370A8 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_004370a8_004370A8() {
    __asm {
        mov eax, 43ac6ch
        ; Exact mapped bytes E8 56 85 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43e1f0h
        ; Exact mapped bytes A1 80 FB 44 00: mov eax, dword ptr [0x44fb80]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        and dword ptr [ebp - 4], 0
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4370d2
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [eax + 18h]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4370d2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
