// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E4796 .. +0xB2 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CPtrArray__UBEXAAVCDumpContext___Z_004E4796() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 ED 6A 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c7b9ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 5c7b94h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 03 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9C 05 05 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 49 03 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 D7 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4e4835
        __asm _emit 0x7e
        __asm _emit 0x57
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e47f0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3A: jge 0x4e4835
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        push 5c7bach
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c7ba8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FD 02 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 42 05 05 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EF 02 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 98 04 05 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x4e47e7
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 5c7bb4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 02 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x02
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
