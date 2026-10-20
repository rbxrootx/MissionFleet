// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F5DA .. +0x129 bytes.
extern "C" __declspec(naked) void FUN_0055f5da_0055F5DA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 D1 FF FF: call 0x55c7cf
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 67b8d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A 92 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5B 94 FC FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 67b8e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F 92 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 95 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 67b8fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 92 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BD 93 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 67b910h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 91 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 91 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 67b928h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE 91 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B0 94 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 67b93ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 91 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C 93 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        push 67b950h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 91 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7A 94 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        push 67b968h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A 91 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 93 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 55c710h
        ; Exact mapped bytes 75 0F: jne 0x55f6e3
        __asm _emit 0x75
        __asm _emit 0x0f
        push 67b97ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 91 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x55f6f0
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67b9b0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5B 91 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        push 67b9e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E 91 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
