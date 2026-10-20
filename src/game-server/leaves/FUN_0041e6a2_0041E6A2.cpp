// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E6A2 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_0041e6a2_0041E6A2() {
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
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 0B 05 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 E7 03 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 DE 06 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41e6ff
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4B: jmp 0x41e74a
        __asm _emit 0xeb
        __asm _emit 0x4b
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 49 06 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 35: je 0x41e748
        __asm _emit 0x74
        __asm _emit 0x35
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x41e725
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 19: jge 0x41e744
        __asm _emit 0x7d
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*8 + 8ch], 0
        ; Exact mapped bytes 75 07: jne 0x41e742
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 08: jmp 0x41e74a
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB D8: jmp 0x41e71c
        __asm _emit 0xeb
        __asm _emit 0xd8
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x41e74a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 8C A0 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa0
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
