// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487800 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_58487800_58487800() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58894d1ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 59 08 00 00: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58487839
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 20h]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 48 02 00 00: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 42 09 00 00: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 79 01 00 00: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x58487891
        __asm _emit 0x74
        __asm _emit 0x33
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 DA 01 00 00: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58487888
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5848788f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 99: jmp 0x5848782a
        __asm _emit 0xeb
        __asm _emit 0x99
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        ; Exact mapped bytes E8 54 08 00 00: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        ; Exact mapped bytes E8 38 FF FF FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
