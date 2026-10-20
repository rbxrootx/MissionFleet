// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA050 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_584aa050_584AA050() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 8
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 12 E0 FD FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584aa080
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 20h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 01 DA FD FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FB E0 FD FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 32 D9 FD FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 3E: je 0x584aa0e3
        __asm _emit 0x74
        __asm _emit 0x3e
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 93 D9 FD FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 29: je 0x584aa0e1
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x584aa0d3
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E2 FD FF FF: call 0x584a9eb0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584aa0da
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 8E: jmp 0x584aa071
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 02 E0 FD FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
