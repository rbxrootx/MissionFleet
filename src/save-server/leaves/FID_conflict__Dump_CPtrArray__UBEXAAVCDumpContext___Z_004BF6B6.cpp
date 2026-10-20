// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BF6B6 .. +0xB2 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CPtrArray__UBEXAAVCDumpContext___Z_004BF6B6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD AC 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        push 67464ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 674644h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 91 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AC 93 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x93
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 59 91 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E 66 06 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x66
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4bf755
        __asm _emit 0x7e
        __asm _emit 0x57
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4bf710
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3A: jge 0x4bf755
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        push 67465ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 674658h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 91 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 52 93 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x93
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FF 90 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D1 93 06 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x93
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x4bf707
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 674664h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 90 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x90
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
