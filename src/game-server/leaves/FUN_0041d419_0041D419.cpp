// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D419 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_0041d419_0041D419() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 8E 17 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 6A 16 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 61 19 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41d47c
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2B: jmp 0x41d4a7
        __asm _emit 0xeb
        __asm _emit 0x2b
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 CC 18 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x41d4a5
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 88 08 01 00 00: mov word ptr [eax + 0x108], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41d4a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 2F B3 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
