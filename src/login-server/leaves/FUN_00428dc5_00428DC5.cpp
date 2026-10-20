// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428DC5 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00428dc5_00428DC5() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 0ch]
        test al, 83h
        ; Exact mapped bytes 74 1D: je 0x428dee
        __asm _emit 0x74
        __asm _emit 0x1d
        test al, 8
        ; Exact mapped bytes 74 19: je 0x428dee
        __asm _emit 0x74
        __asm _emit 0x19
        push dword ptr [esi + 8]
        ; Exact mapped bytes E8 41 67 FF FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 81 66 0C F7 FB: and word ptr [esi + 0xc], 0xfbf7
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x0c
        __asm _emit 0xf7
        __asm _emit 0xfb
        xor eax, eax
        pop ecx
        mov dword ptr [esi], eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}
