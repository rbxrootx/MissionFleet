// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4034 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_004a4034_004A4034() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0ach
        push 5d00cch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 0F 71 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        push 1
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F8 BD 02 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a4076
        __asm _emit 0x75
        __asm _emit 0x14
        push 0adh
        push 5d00cch
        ; Exact mapped bytes E8 8F 09 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x09
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a4076
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a4051
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0b0h
        push 5d00cch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 CE 70 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 5A 80 09 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
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
