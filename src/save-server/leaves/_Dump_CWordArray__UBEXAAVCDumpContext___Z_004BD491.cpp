// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BD491 .. +0xB3 bytes.
extern "C" __declspec(naked) void _Dump_CWordArray__UBEXAAVCDumpContext___Z_004BD491() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F2 CE 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        push 674524h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 67451ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8C B3 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D1 B5 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7E B3 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 88 06 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 58: jle 0x4bd531
        __asm _emit 0x7e
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4bd4eb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3B: jge 0x4bd531
        __asm _emit 0x7d
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 04 51: mov ax, word ptr [ecx + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x51
        push eax
        push 674534h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 674530h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 31 B3 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 76 B5 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 23 B3 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 93 B4 06 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B1: jmp 0x4bd4e2
        __asm _emit 0xeb
        __asm _emit 0xb1
        push 67453ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D B3 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
