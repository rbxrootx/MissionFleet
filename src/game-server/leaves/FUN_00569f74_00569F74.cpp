// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00569F74 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_00569f74_00569F74() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 13bh
        push 5d053ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 CF 11 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B8 5E F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5e
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x569fb6
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ch
        push 5d053ch
        ; Exact mapped bytes E8 4F AA FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569fb6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x569f91
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 63 00 00: call 0x570336
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x569fdc
        __asm _emit 0x75
        __asm _emit 0x14
        push 13dh
        push 5d053ch
        ; Exact mapped bytes E8 29 AA FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569fdc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x569fbc
        __asm _emit 0x75
        __asm _emit 0xda
        push 13eh
        push 5d053ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        push edx
        ; Exact mapped bytes E8 65 11 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        add ecx, 114h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
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
