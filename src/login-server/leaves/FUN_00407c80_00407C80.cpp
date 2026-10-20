// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407C80 .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_00407c80_00407C80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439627h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D1 A8 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 F3 C5 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        ; Exact mapped bytes E8 E1 C5 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43c8c0h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 110h], 0
        push 44da54h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 38 60 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 118h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 11ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 120h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 124h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 128h], 0
        push 44da58h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        ; Exact mapped bytes E8 E4 5F 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 8
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
