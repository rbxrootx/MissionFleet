// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E2452 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_004e2452_004E2452() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 111h
        push 5c7a18h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F2 8C 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 41 E5 04 00: call 0x5309bb
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 F4 04 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x4e24ad
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 50 38 02 00: call 0x505ce5
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 2F 02 00: call 0x5053e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 2F: jmp 0x4e24dc
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E 38 02 00: call 0x505d23
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 F7 FF FF: call 0x4e1c17
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AE 2A 02 00: call 0x504f8a
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
