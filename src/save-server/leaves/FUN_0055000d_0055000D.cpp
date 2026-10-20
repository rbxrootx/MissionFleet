// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055000D .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_0055000d_0055000D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 163h
        push 67bf90h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 37 A2 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5F: je 0x5500a3
        __asm _emit 0x74
        __asm _emit 0x5f
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 0ch], eax
        push 16bh
        push 67bf90h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F7 A1 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 01 2A F8 FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 16dh
        push 67bf90h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 D9 A1 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FF 61 F8 FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x61
        __asm _emit 0xf8
        __asm _emit 0xff
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5500a1
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 02: jmp 0x5500a3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9B: jmp 0x55003e
        __asm _emit 0xeb
        __asm _emit 0x9b
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 70h]
        ; Exact mapped bytes 74 1B: je 0x5500c9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 90 D4 00 00 00: call dword ptr [eax + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 70h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
