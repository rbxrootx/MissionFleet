// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E6DF1 .. +0xB1 bytes.
extern "C" __declspec(naked) void _Dump_CStringArray__UBEXAAVCDumpContext___Z_004E6DF1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 92 44 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c7cd8h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 5c7cd0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC DC 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 41 DF 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EE DC 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A B1 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 56: jle 0x4e6e8f
        __asm _emit 0x7e
        __asm _emit 0x56
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e6e4b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 39: jge 0x4e6e8f
        __asm _emit 0x7d
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        lea eax, [ecx + edx*4]
        push eax
        push 5c7ce8h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c7ce4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A2 DC 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E7 DE 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 94 DC 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 58 6B 00 00: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B3: jmp 0x4e6e42
        __asm _emit 0xeb
        __asm _emit 0xb3
        push 5c7cf0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F DC 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
