// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DC24 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_0042dc24_0042DC24() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0c28h]
        ; Exact mapped bytes E8 40 0B 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x42dc80
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC B8 FF FF: call 0x429561
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 05: je 0x42dc73
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 0F: jmp 0x42dc82
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 0B 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D3: jmp 0x42dc53
        __asm _emit 0xeb
        __asm _emit 0xd3
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 64 71 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
