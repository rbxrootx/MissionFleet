// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005364EE .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_005364ee_005364EE() {
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
        ; Exact mapped bytes 75 14: jne 0x536515
        __asm _emit 0x75
        __asm _emit 0x14
        push 371h
        push 636640h
        ; Exact mapped bytes E8 30 28 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x536515
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5364f8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 04 B5 68 00: call dword ptr [0x68b504]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
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
