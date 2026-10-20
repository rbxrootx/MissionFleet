// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A0FB0 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_587a0fb0_587A0FB0() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 41: je 0x587a0ff9
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [esp + 8]
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x587a0ff9
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [esp + 0ch]
        push esi
        cmp edx, 7fffffffh
        ; Exact mapped bytes 77 1B: ja 0x587a0fe8
        __asm _emit 0x77
        __asm _emit 0x1b
        mov esi, dword ptr [esp + 14h]
        cmp esi, 7fffffffh
        ; Exact mapped bytes 77 0F: ja 0x587a0fe8
        __asm _emit 0x77
        __asm _emit 0x0f
        or dword ptr [eax + 8], 40000h
        mov dword ptr [eax + 3ch], esi
        mov dword ptr [eax + 38h], edx
        pop esi
        ret
        push 1
        push 588b85f0h
        push ecx
        ; Exact mapped bytes E8 FB DC FF FF: call 0x5879ecf0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop esi
        ret
    }
}
