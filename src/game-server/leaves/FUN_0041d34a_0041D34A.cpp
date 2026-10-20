// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D34A .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_0041d34a_0041D34A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 5A 18 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 36 17 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 2D 1A 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41d3b0
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 59: jmp 0x41d409
        __asm _emit 0xeb
        __asm _emit 0x59
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 98 19 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 43: je 0x41d407
        __asm _emit 0x74
        __asm _emit 0x43
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x41d3d6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 24: jge 0x41d400
        __asm _emit 0x7d
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*8 + 8ch], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*8 + 90h], 0
        ; Exact mapped bytes EB CD: jmp 0x41d3cd
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41d409
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 CD B3 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
