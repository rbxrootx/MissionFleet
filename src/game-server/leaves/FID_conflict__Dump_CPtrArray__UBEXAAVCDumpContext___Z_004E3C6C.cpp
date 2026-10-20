// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E3C6C .. +0xB2 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CPtrArray__UBEXAAVCDumpContext___Z_004E3C6C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 17 76 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c7b44h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 5c7b3ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 0E 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C6 10 05 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 73 0E 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9F E2 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4e3d0b
        __asm _emit 0x7e
        __asm _emit 0x57
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e3cc6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3A: jge 0x4e3d0b
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        push 5c7b54h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c7b50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 0E 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6C 10 05 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 19 0E 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2A 10 05 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x4e3cbd
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 5c7b5ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 0E 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
