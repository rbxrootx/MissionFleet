// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00538C3D .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_00538c3d_00538C3D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x538c64
        __asm _emit 0x75
        __asm _emit 0x14
        push 2b4h
        push 581fc0h
        ; Exact mapped bytes E8 A1 BD FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x538c64
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x538c47
        __asm _emit 0x75
        __asm _emit 0xdd
        xor edx, edx
        cmp dword ptr [ebp + 20h], 0
        setne dl
        inc edx
        mov eax, dword ptr [ebp + 1ch]
        or eax, edx
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 DC 42 F5 FF: call 0x48cf80
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0xf5
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
