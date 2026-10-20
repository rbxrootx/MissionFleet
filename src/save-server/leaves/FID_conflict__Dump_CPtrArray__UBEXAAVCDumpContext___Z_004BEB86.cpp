// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BEB86 .. +0xB2 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CPtrArray__UBEXAAVCDumpContext___Z_004BEB86() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FD B7 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        push 6745f4h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 6745ech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 9C 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DC 9E 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 89 9C 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E 71 06 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4bec25
        __asm _emit 0x7e
        __asm _emit 0x57
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4bebe0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3A: jge 0x4bec25
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        push 674604h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 674600h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D 9C 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 82 9E 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2F 9C 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D8 9D 06 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x4bebd7
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 67460ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 9C 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x9c
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
