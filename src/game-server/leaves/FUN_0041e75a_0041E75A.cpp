// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E75A .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_0041e75a_0041E75A() {
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
        ; Exact mapped bytes E8 53 04 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 2F 03 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 26 06 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41e7b7
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 49: jmp 0x41e800
        __asm _emit 0xeb
        __asm _emit 0x49
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 91 05 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 30: je 0x41e7fb
        __asm _emit 0x74
        __asm _emit 0x30
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x41e7dd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 18: jge 0x41e7fb
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*8 + 90h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 04: jne 0x41e7f9
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x41e800
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB D9: jmp 0x41e7d4
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov eax, 1
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 D6 9F 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9f
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
