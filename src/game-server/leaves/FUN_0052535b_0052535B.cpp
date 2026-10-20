// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052535B .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_0052535b_0052535B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 41ch
        push 5c8174h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 E6 5D FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x525394
        __asm _emit 0x75
        __asm _emit 0x14
        push 41dh
        push 5c8174h
        ; Exact mapped bytes E8 71 F6 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525394
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x52537a
        __asm _emit 0x75
        __asm _emit 0xe0
        push 584d10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 5C FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5253bf
        __asm _emit 0x75
        __asm _emit 0x14
        push 41eh
        push 5c8174h
        ; Exact mapped bytes E8 46 F6 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5253bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x52539a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 FD FF FF: call 0x5250d4
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 14: jge 0x5253ee
        __asm _emit 0x7d
        __asm _emit 0x14
        push 421h
        push 5c8174h
        ; Exact mapped bytes E8 17 F6 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5253ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5253d4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 09 00 00 00: call 0x525409
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
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
