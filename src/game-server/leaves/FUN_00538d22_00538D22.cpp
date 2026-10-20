// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00538D22 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_00538d22_00538D22() {
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
        ; Exact mapped bytes 75 14: jne 0x538d49
        __asm _emit 0x75
        __asm _emit 0x14
        push 2bah
        push 581fc0h
        ; Exact mapped bytes E8 BC BC FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x538d49
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x538d2c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 03 42 F5 FF: call 0x48cf80
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x42
        __asm _emit 0xf5
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
