// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C11E1 .. +0xB1 bytes.
extern "C" __declspec(naked) void _Dump_CStringArray__UBEXAAVCDumpContext___Z_004C11E1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A2 91 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        push 674730h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 674728h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C 76 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 81 78 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2E 76 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 4A 06 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 56: jle 0x4c127f
        __asm _emit 0x7e
        __asm _emit 0x56
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4c123b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 39: jge 0x4c127f
        __asm _emit 0x7d
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        lea eax, [ecx + edx*4]
        push eax
        push 674740h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 67473ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 75 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 27 78 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D4 75 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 08 B8 00 00: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B3: jmp 0x4c1232
        __asm _emit 0xeb
        __asm _emit 0xb3
        push 674748h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF 75 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x75
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
