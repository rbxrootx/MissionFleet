// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864ABE0 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_5864abe0_5864ABE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1F D3 E3 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd3
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 16 D3 E3 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 3A: je 0x5864ac5d
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 D8 C2 E3 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc2
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx]
        cdq
        mov ecx, 54h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 34 01 00 00: call 0x5864ad90
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        imul eax, dword ptr [ebp + 0ch], 54h
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], eax
        imul edx, dword ptr [ebp + 10h], 54h
        add edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
