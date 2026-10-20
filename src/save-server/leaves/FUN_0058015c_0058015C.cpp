// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058015C .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_0058015c_0058015C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1
        push 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F1 32 F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x32
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58018d
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b7h
        push 67849ch
        ; Exact mapped bytes E8 B8 8B FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x8b
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x58018d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x580168
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1A 4B FA FF: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        push 0
        push 0
        ; Exact mapped bytes FF 15 18 BA 68 00: call dword ptr [0x68ba18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 F8 BA 68 00: call dword ptr [0x68baf8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5801cf
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 0D 2D F2 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x2d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D8 4A FA FF: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 18 BA 68 00: call dword ptr [0x68ba18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x580211
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c5h
        push 67849ch
        ; Exact mapped bytes E8 34 8B FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x8b
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x580211
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x5801f5
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
