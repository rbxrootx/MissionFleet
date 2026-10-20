// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00511EF0 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_00511ef0_00511EF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 392h
        push 5c84b0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 51 92 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 6ch], 1
        ; Exact mapped bytes 7F 14: jg 0x511f2c
        __asm _emit 0x7f
        __asm _emit 0x14
        push 393h
        push 5c84b0h
        ; Exact mapped bytes E8 D9 2A 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511f2c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x511f0f
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 29 3A 02 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AB A2 02 00: call 0x53c1f7
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BE E7 FF FF: call 0x51071c
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE A2 02 00: call 0x53c243
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 78h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx + 4], edx
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [edx + eax]
        ; Exact mapped bytes 7D 37: jge 0x511fc3
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ecx + edx + 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 56 CE FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x511fc1
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 60: jmp 0x512023
        __asm _emit 0xeb
        __asm _emit 0x60
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        imul ecx, ecx, 0ch
        mov esi, dword ptr [ebp - 0ch]
        mov esi, dword ptr [esi + 78h]
        mov edx, dword ptr [edx + eax + 8]
        add edx, dword ptr [esi + ecx + 8]
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 78h]
        mov esi, dword ptr [ebp - 8]
        add esi, dword ptr [ecx + eax]
        cmp edx, esi
        ; Exact mapped bytes 7D 24: jge 0x512023
        __asm _emit 0x7d
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F7 CD FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x512023
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
