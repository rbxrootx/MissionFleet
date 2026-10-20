// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053A53C .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_0053a53c_0053A53C() {
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
        ; Exact mapped bytes 75 14: jne 0x53a563
        __asm _emit 0x75
        __asm _emit 0x14
        push 398h
        push 581fc0h
        ; Exact mapped bytes E8 A2 A4 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53a563
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53a546
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 30h]
        push edx
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 49 D3 FF FF: call 0x5378d5
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 D4 1F 5E 00: call dword ptr [0x5e1fd4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 2C 00: ret 0x2c
        __asm _emit 0xc2
        __asm _emit 0x2c
        __asm _emit 0x00
    }
}
