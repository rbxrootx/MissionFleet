// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B064 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_5883b064_5883B064() {
    __asm {
        push esi
        push 1
        push 40h
        push 1
        mov esi, ecx
        ; Exact mapped bytes E8 D8 F1 FF FF: call 0x5883a24a
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        add esp, 0ch
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x5883b07f
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [esi]
        mov dword ptr [edx], ecx
        lea ecx, [edx + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x5883b08a
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        mov dword ptr [ecx], eax
        lea ecx, [edx + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x5883b095
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        mov dword ptr [ecx], eax
        mov eax, edx
        pop esi
        ret
    }
}
