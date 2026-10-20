// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D5157 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_004d5157_004D5157() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d5186
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dbeh
        push 671a64h
        ; Exact mapped bytes E8 BF 3B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d5186
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d5161
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4d51bf
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        and edx, 0ffffffefh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 24h], edx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE 64 05 00: call 0x52b68d
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x64
        __asm _emit 0x05
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
