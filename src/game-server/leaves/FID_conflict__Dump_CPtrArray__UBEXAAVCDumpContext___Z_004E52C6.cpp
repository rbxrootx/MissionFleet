// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E52C6 .. +0xB2 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CPtrArray__UBEXAAVCDumpContext___Z_004E52C6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD 5F 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c7bf4h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 5c7bech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 F8 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6C FA 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 19 F8 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 CC 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4e5365
        __asm _emit 0x7e
        __asm _emit 0x57
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e5320
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3A: jge 0x4e5365
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        push 5c7c04h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c7c00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD F7 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 12 FA 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BF F7 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 91 FA 04 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x4e5317
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 5c7c0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 F7 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf7
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
