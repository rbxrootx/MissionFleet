// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AC050 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004ac050_004AC050() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 6E F9 FF FF: call 0x4ab9d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 19: jne 0x4ac084
        __asm _emit 0x75
        __asm _emit 0x19
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 13: jne 0x4ac084
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D B0 12 5D 00: mov ecx, dword ptr [0x5d12b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 3D: je 0x4ac0bb
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 37: je 0x4ac0bb
        __asm _emit 0x74
        __asm _emit 0x37
        push 58c1dch
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 95 4A 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac0a4
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4ac084
        __asm _emit 0x75
        __asm _emit 0xda
        push 0
        ; Exact mapped bytes E8 BF FB FF FF: call 0x4abc70
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4ac0bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
