// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869E180 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_5869e180_5869E180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 100h]
        ; Exact mapped bytes E8 B2 34 E3 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x34
        __asm _emit 0xe3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x5869e25c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 100h]
        ; Exact mapped bytes E8 9C 34 E3 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x34
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8E 8A 00 00 00: jle 0x5869e255
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5869e1e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 100h]
        ; Exact mapped bytes E8 61 34 E3 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x34
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 74 58: je 0x5869e253
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 100h]
        ; Exact mapped bytes E8 47 34 E3 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x34
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [eax + edx]
        mov byte ptr [ebp - 1], al
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, 20h
        ; Exact mapped bytes 74 09: je 0x5869e224
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, 27h
        ; Exact mapped bytes 75 09: jne 0x5869e22d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 26: jmp 0x5869e253
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7C 09: jl 0x5869e23f
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, 1fh
        ; Exact mapped bytes 7E 09: jle 0x5869e248
        __asm _emit 0x7e
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, 7fh
        ; Exact mapped bytes 75 09: jne 0x5869e251
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 02: jmp 0x5869e253
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 85: jmp 0x5869e1d8
        __asm _emit 0xeb
        __asm _emit 0x85
        ; Exact mapped bytes EB 07: jmp 0x5869e25c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 2A: jne 0x5869e28c
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 100h]
        ; Exact mapped bytes E8 90 22 E3 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes E8 7B 8F E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 3e6h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E5 AA E3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xaa
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
