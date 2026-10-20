// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B95C .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_5883b95c_5883B95C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        cmp esi, dword ptr [eax]
        ; Exact mapped bytes 75 2C: jne 0x5883b999
        __asm _emit 0x75
        __asm _emit 0x2c
        cmp dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 75 27: jne 0x5883b999
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes E8 45 FF FF FF: call 0x5883b8bc
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 21: jmp 0x5883b9a3
        __asm _emit 0xeb
        __asm _emit 0x21
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 D6 6D C6 FF: call 0x584a2760
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6d
        __asm _emit 0xc6
        __asm _emit 0xff
        push esi
        lea eax, [ebp - 4]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 15 00 00 00: call 0x5883b9ab
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        cmp esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 E4: jne 0x5883b982
        __asm _emit 0x75
        __asm _emit 0xe4
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], esi
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
