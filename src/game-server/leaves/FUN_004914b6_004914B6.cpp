// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004914B6 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_004914b6_004914B6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e2c5h
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
        sub esp, 30h
        mov dword ptr [ebp - 3ch], ecx
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 2ch
        ; Exact mapped bytes E8 84 49 0A 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], edx
        push 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 E5 20 07 00: call 0x5035dd
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 E5 0E 09 00: call 0x5223f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0x09
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 44: call dword ptr [ecx + 0x44]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x44
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7C 46: jl 0x491572
        __asm _emit 0x7c
        __asm _emit 0x46
        lea edx, [ebp - 14h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 48: call dword ptr [edx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 7C 2A: jl 0x491572
        __asm _emit 0x7c
        __asm _emit 0x2a
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 DF 0F 09 00: call 0x522533
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 2ch]
        add edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 34h], edx
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 30h]
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 38h], edx
        xor ecx, ecx
        cmp dword ptr [ebp - 18h], 0
        setge cl
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 02 21 07 00: call 0x50368f
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
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
        ret
    }
}
