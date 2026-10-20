// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1DE0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_100f1de0_100F1DE0() {
    __asm {
        push ebp
        push esi
        lea esi, [ecx + 83ch]
        mov ebp, 20h
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x100f1e1e
        __asm _emit 0x74
        __asm _emit 0x2b
        push eax
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [eax + 20h]
        ; Exact mapped bytes E8 2F 78 F3 FF: call 0x10029630
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x78
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0e8h], 0ffffffffh
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 60h]
        and ch, 0fh
        mov dword ptr [eax + 60h], ecx
        mov dword ptr [esi], 0
        add esi, 4
        dec ebp
        ; Exact mapped bytes 75 C9: jne 0x100f1ded
        __asm _emit 0x75
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 0d48h]
        ; Exact mapped bytes E8 AB F0 FB FF: call 0x100b0ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        pop esi
        pop ebp
        ret
    }
}
