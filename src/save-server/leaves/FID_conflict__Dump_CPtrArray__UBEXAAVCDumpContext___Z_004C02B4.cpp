// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C02B4 .. +0xB2 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CPtrArray__UBEXAAVCDumpContext___Z_004C02B4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CF A0 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        push 6746bch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 6746b4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 85 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AE 87 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5B 85 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 5A 06 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4c0353
        __asm _emit 0x7e
        __asm _emit 0x57
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4c030e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3A: jge 0x4c0353
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        push 6746cch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 6746c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F 85 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 54 87 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 01 85 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7A 87 06 00: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x4c0305
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 6746d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB 84 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x84
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
