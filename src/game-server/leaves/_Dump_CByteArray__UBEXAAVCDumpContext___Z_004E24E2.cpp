// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E24E2 .. +0xB2 bytes.
extern "C" __declspec(naked) void _Dump_CByteArray__UBEXAAVCDumpContext___Z_004E24E2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 8D 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c7a54h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 5c7a4ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0B 26 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 50 28 05 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FD 25 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 FA 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4e2581
        __asm _emit 0x7e
        __asm _emit 0x57
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e253c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3A: jge 0x4e2581
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ecx + edx]
        push eax
        push 5c7a64h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c7a60h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 25 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F6 27 05 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A3 25 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DA 26 05 00: call 0x534c59
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x4e2533
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 5c7a6ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D 25 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x25
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
