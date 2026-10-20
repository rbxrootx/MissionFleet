// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C8C40 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_587c8c40_587C8C40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883a1dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9E 27 FF FF: call 0x587bb410
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588be670h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 3
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes FF 15 58 42 89 58: call dword ptr [0x58894258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 34h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 38h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 52 0A 00 00: call 0x587c9740
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
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
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
