// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00404711 .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_00404711_00404711() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        push ecx
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 448de0h
        mov edx, dword ptr [ebp - 14h]
        add edx, 104h
        push edx
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 C7 80 2C 01 00 00 01 00: mov word ptr [eax + 0x12c], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 C7 81 2E 01 00 00 00 00: mov word ptr [ecx + 0x12e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 130h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 134h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 138h], edx
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 62 91 02 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 140h], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4047ae
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 15: jge 0x4047cb
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 140h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx*4], 0ffffffffh
        ; Exact mapped bytes EB DA: jmp 0x4047a5
        __asm _emit 0xeb
        __asm _emit 0xda
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        mov edx, dword ptr [ebp - 14h]
        add edx, 4
        push edx
        ; Exact mapped bytes FF 15 50 C2 43 00: call dword ptr [0x43c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 54: je 0x404847
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        lea eax, [ebp - 8]
        push eax
        push 3ch
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 104h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 138h]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 140h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 10: jmp 0x404857
        __asm _emit 0xeb
        __asm _emit 0x10
        push 0
        push 0
        push 448e0ch
        ; Exact mapped bytes E8 C2 04 03 00: call 0x434d17
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
