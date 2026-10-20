// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417484 .. +0x173 bytes.
extern "C" __declspec(naked) void FUN_00417484_00417484() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4174ab
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 3C 01 00 00: jmp 0x4175e7
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 4
        mov dword ptr [ebp - 0ch], 0
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 BD E9 FF FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4174e1
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x4175e7
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [eax + ecx*4 + 78h], -1
        ; Exact mapped bytes 75 19: jne 0x41750d
        __asm _emit 0x75
        __asm _emit 0x19
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A0 F6 FF FF: call 0x416ba6
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x4175e7
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4 + 78h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C9 3B 03 00: call 0x44b0ef
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x417543
        __asm _emit 0x75
        __asm _emit 0x19
        push 3
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6A F6 FF FF: call 0x416ba6
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x4175e7
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A4 00 00 00: call 0x4175f7
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x41755e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x4175e7
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC 02 00 00: call 0x41783a
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 18h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 18h]
        shl edx, 10h
        mov eax, dword ptr [ebp - 10h]
        or edx, dword ptr [eax + 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 20h], edx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 8002f004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D FC 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 50 FC 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 EF 11 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x11
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
