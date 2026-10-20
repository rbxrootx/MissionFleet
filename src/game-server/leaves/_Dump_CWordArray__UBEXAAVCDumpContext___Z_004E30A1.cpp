// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E30A1 .. +0xB3 bytes.
extern "C" __declspec(naked) void _Dump_CWordArray__UBEXAAVCDumpContext___Z_004E30A1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E2 81 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c7acch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 5c7ac4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C 1A 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 91 1C 05 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3E 1A 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A EE 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 58: jle 0x4e3141
        __asm _emit 0x7e
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e30fb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3B: jge 0x4e3141
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
        push 5c7adch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c7ad8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 19 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 36 1C 05 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E3 19 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 53 1B 05 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB B1: jmp 0x4e30f2
        __asm _emit 0xeb
        __asm _emit 0xb1
        push 5c7ae4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 19 05 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x19
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
