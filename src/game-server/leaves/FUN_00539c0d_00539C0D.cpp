// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00539C0D .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_00539c0d_00539C0D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x539c34
        __asm _emit 0x75
        __asm _emit 0x14
        push 340h
        push 581fc0h
        ; Exact mapped bytes E8 D1 AD FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x539c34
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x539c17
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 16 73 FF FF: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 57 73 FF FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 44 28 5E 00: call dword ptr [0x5e2844]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 BA FF FF: call 0x53569d
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
