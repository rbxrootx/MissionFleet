// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E430 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_0041e430_0041E430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 80 07 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 5C 06 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 53 09 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41e48a
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x41e4b7
        __asm _emit 0xeb
        __asm _emit 0x2d
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 BE 08 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x41e4b5
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA BA FF FF: call 0x419fa4
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x41e4b5
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41e4b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 1F A3 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa3
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
