// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561954 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_00561954_00561954() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 13ch
        push 5ce6c8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 ED 97 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x97
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        push 18h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 34h]
        push edx
        ; Exact mapped bytes E8 D3 E4 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56199b
        __asm _emit 0x75
        __asm _emit 0x14
        push 13dh
        push 5ce6c8h
        ; Exact mapped bytes E8 6A 30 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56199b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x561973
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 34h]
        ; Exact mapped bytes E8 3D 99 F9 FF: call 0x4fb2e9
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x99
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x5619ba
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 F2 E3 F6 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe3
        __asm _emit 0xf6
        __asm _emit 0xff
        push 583058h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 96 F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5619df
        __asm _emit 0x75
        __asm _emit 0x14
        push 146h
        push 5ce6c8h
        ; Exact mapped bytes E8 26 30 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5619df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5619ba
        __asm _emit 0x75
        __asm _emit 0xd5
        push 147h
        push 5ce6c8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 68 97 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x97
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
