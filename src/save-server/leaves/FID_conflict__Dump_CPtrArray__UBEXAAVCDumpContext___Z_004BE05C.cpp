// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BE05C .. +0xB2 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CPtrArray__UBEXAAVCDumpContext___Z_004BE05C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 27 C3 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        push 67459ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 674594h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 A7 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 06 AA 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xaa
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B3 A7 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 7C 06 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4be0fb
        __asm _emit 0x7e
        __asm _emit 0x57
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4be0b6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3A: jge 0x4be0fb
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        push 6745ach
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 6745a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 A7 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AC A9 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa9
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 59 A7 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6A A9 06 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa9
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x4be0ad
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 6745b4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 A7 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa7
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
