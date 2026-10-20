// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E5EC4 .. +0xB2 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CPtrArray__UBEXAAVCDumpContext___Z_004E5EC4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF 53 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c7c64h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 5c7c5ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 EC 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6E EE 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1B EC 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 C0 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4e5f63
        __asm _emit 0x7e
        __asm _emit 0x57
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e5f1e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3A: jge 0x4e5f63
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        push 5c7c74h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c7c70h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF EB 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 14 EE 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C1 EB 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3A EE 04 00: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x4e5f15
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 5c7c7ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB EB 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xeb
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
